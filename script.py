#!/usr/bin/python
import subprocess
cmd = "timeout 7200 ./teste.out < ./Entradas/entra.txt >> ./Saidas/output.txt"
for i in range(0,10):
	process = subprocess.Popen(cmd,shell=True, stdout=subprocess.PIPE)
	process.wait()
