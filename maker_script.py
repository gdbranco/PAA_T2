#!/usr/bin/python
import subprocess
#Shuffle
num = 10
cmd = "./maker.out " + str(num) + " 3 > ./Entradas/entrada_" + str(num) + "_shuffle.txt"
for i in range(0,4):
	process = subprocess.Popen(cmd,shell=True, stdout=subprocess.PIPE)
	process.wait()
	num*=2
	cmd = "./maker.out " + str(num) + " 3 > ./Entradas/entrada_" + str(num) + "_shuffle.txt"
num = 100
cmd = "./maker.out " + str(num) + " 3 > ./Entradas/entrada_" + str(num) + "_shuffle.txt"
for i in range(0,16):
	process = subprocess.Popen(cmd,shell=True, stdout=subprocess.PIPE)
	process.wait()
	num*=2
	cmd = "./maker.out " + str(num) + " 3 > ./Entradas/entrada_" + str(num) + "_shuffle.txt"
#Normal
num = 10
cmd = "./maker.out " + str(num) + " 1 > ./Entradas/entrada_" + str(num) + "_normal.txt"
for i in range(0,4):
	process = subprocess.Popen(cmd,shell=True, stdout=subprocess.PIPE)
	process.wait()
	num*=2
	cmd = "./maker.out " + str(num) + " 1 > ./Entradas/entrada_" + str(num) + "_normal.txt"
num = 100
cmd = "./maker.out " + str(num) + " 1 > ./Entradas/entrada_" + str(num) + "_normal.txt"
for i in range(0,16):
	process = subprocess.Popen(cmd,shell=True, stdout=subprocess.PIPE)
	process.wait()
	num*=2
	cmd = "./maker.out " + str(num) + " 1 > ./Entradas/entrada_" + str(num) + "_normal.txt"
#Reverse
num = 10
cmd = "./maker.out " + str(num) + " 2 > ./Entradas/entrada_" + str(num) + "_reverse.txt"
for i in range(0,4):
	process = subprocess.Popen(cmd,shell=True, stdout=subprocess.PIPE)
	process.wait()
	num*=2
	cmd = "./maker.out " + str(num) + " 2 > ./Entradas/entrada_" + str(num) + "_reverse.txt"
num = 100
cmd = "./maker.out " + str(num) + " 2 > ./Entradas/entrada_" + str(num) + "_reverse.txt"
for i in range(0,16):
	process = subprocess.Popen(cmd,shell=True, stdout=subprocess.PIPE)
	process.wait()
	num*=2
	cmd = "./maker.out " + str(num) + " 2 > ./Entradas/entrada_" + str(num) + "_reverse.txt"
