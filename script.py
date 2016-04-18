#!/usr/bin/python
import subprocess
import time
import os
import sys
if (len(sys.argv) > 2):
	sort = ["Bubble","Comb","Insertion","Merge","Selection","Shell"]
	files = ["Reversed","Shuffle","Normal"]
	archives = 20
	timeout = int(sys.argv[1]);
	times = int(sys.argv[2])
	sum = float(0)
	for mode in sort:
		outpath = "./Saidas/" + mode + "/"
		if not os.path.isdir(outpath):
			print "Caminho: " + outpath + "\nNao existe e sera criado"
			os.makedirs(outpath)
		for type in files:
			inpath = "./Entradas/" + type + "/"
			num = 10
			for i in range(0,archives):
				if(sum >= timeout):
					print "Nao precisa fazer pois sera maior que o timeout"
					continue
				sum = float(0)
				infile_name = inpath + str(num) + "_" + type.lower() + ".txt"
				cmd = " ./" + mode.lower() + ".out <" + infile_name
				print "Running: " + cmd
				for j in range(0,times):
					print "times " + str(j);		
					process = subprocess.Popen(cmd,shell=True, stdout=subprocess.PIPE)
					process.wait()
					sum += float(process.stdout.read())
					time.sleep(1)
				sum/=times
				outfile_name = outpath + "saida_" + type.lower() + ".csv";
				with open(outfile_name,"a") as f:
					duracao = "{0:.6f}".format(sum)
					print "Escrevendo: " + outfile_name 
					print "Time:" + duracao
					f.write(duracao)
					f.write("\n")
				num*=2
				if(i == 3):
					num = 100
			sum = float(0)
else:
	print "Usage: ./script <timout> <times>"
