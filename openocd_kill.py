import os
import subprocess

def kill_openocd_on_port(port=6666):
    try:
        # Find the PID of the process using the specified port
        result = subprocess.run(['lsof', '-i', f':{port}'], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        output = result.stdout.decode('utf-8')
        
        # Extract the PID from the output
        lines = output.splitlines()
        if len(lines) > 1:
            pid = int(lines[1].split()[1])
            print(f"Found openocd process with PID: {pid}")
            
            # Send the kill command
            os.system(f"sudo kill -9 {pid}")
            print(f"Sent kill signal to process {pid}.")
        else:
            print(f"No process found on port {port}.")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    kill_openocd_on_port()
