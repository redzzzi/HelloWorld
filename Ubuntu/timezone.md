# Ubuntu 한국 시간 동기화
1. ```sudo apt update```
2. ```sudo apt install systemd-timesyncd```
3. ```sudo systemctl enable systemd-timesyncd```
4. ```sudo systemctl start systemd-timesyncd```
5. ```sudo timedatectl set-timezone Asia/Seoul```
