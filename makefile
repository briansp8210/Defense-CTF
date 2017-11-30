all: vuln hook.so

vuln: vuln.c
	gcc -fno-stack-protector -o vuln vuln.c

hook.so: hook.c
	gcc -fPIC -shared -o hook.so hook.c

clean:
	rm -f hook.so vuln
