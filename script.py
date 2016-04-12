import subprocess
cmd = "timeout 7200 time ./teste < ./Entradas/entra.txt"
for i in range(0,1):
	process = subprocess.Popen(cmd,shell=True, stdout=subprocess.PIPE)
	process.wait()
