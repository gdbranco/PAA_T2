#!/usr/bin/python
import subprocess
#Shuffle
num = 10
cmd = "timeout 7200 ./teste.out < ./Entradas/Shuffle/entrada_" + str(num) + "_shuffle.txt >> ./Saidas/Shuffle/saida_" + str(num) + "_shuffle.txt"
for i in range(0,4):
	for j in range(0,10):
		process = subprocess.Popen(cmd,shell=True, stdout=subprocess.PIPE)
		process.wait()
	num*=2
	cmd = "timeout 7200 ./teste.out < ./Entradas/Shuffle/entrada_" + str(num) + "_shuffle.txt >> ./Saidas/Shuffle/saida_" + str(num) + "_shuffle.txt"
num = 100
cmd = "timeout 7200 ./teste.out < ./Entradas/Shuffle/entrada_" + str(num) + "_shuffle.txt >> ./Saidas/Shuffle/saida_" + str(num) + "_shuffle.txt"
for i in range(0,16):
	for j in range(0,10):
		process = subprocess.Popen(cmd,shell=True, stdout=subprocess.PIPE)
		process.wait()
	num*=2
	cmd = "timeout 7200 ./teste.out < ./Entradas/Shuffle/entrada_" + str(num) + "_shuffle.txt >> ./Saidas/Shuffle/saida_" + str(num) + "_shuffle.txt"
