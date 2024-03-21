- 상단 페이지로 올라가기 : `b`
- 하단 페이지로 내려가기 : `Backspace`
- 최상단 페이지로 올라가기 : `g`
- 최하단 페이지로 내려가기 : `G`

# Ubuntu Command
## UFW
1. UFW 활성화: ```sudo ufw enable```
1. UFW 상태 확인: ```sudo ufw status verdose```
    - UFW: 다양한 리눅스 환경에서 작동되는 사용하기 쉬운 **방화벽 관리 프로그램**
2. UFW 허용: ```sudo ufw allow <port>/<optional: protocal>```
    - 예1: ssh 포트 22번 허용(TCP/UDP 22번 포트 모두 허용): ```sudo ufw allow 22```
    - 예2: TCP 22번 포트만을 허용: ```sudo ufw allow 22/tcp```
    - 예3: UDP 22번 포트만을 허용: ```sudo ufw allow 22/udp```
3. UFW 거부: ```sudo ufw deny <port>/<optional: protocol>```
4. 특정한 IP주소 허용: ```sudo ufw allow from <ip address>```


# Vim & Lunar Vim
```lvim``` 접속
1. 파일&폴더 바 열기/닫: ```space``` + ```e```
2. 폴더 펼치기/파일 열기: ```l```
3. 파일 닫기: ```space``` + ```c```
4. 커서 적용 화면 전환: ```ctrl``` + ```h```/```l```
5. 폴더 접기: ```h```
6. 검색: ```/```
7. 문장 맨 뒤로 커서: ```shift``` + ```a```
8. 문자 잡기(?) : `ctrl + v`
    1. 잡힌 영역 `s`
    2. 수정 후 `esc`

1. 모든 창을 동시에 닫고 vi 종료: ```:qa```
2. 모든 창을 동시에 닫으면서 편집한 파일들을 저장하지 않고 종료: ```:qa!```
3. ```u``` 적용 취소하고 전으로 되돌아가기: ```ctrl``` + ```r```
4. 파일 내부의 내용만 삭제하기: ```cat /dev/null > <파일명>```
5. 아키텍쳐 확인: `uname -m`
   ![image](https://github.com/redzzzi/HelloWorld/assets/127263392/ceba3cf8-e935-49cd-9d41-bcffe686a5e6)


# shell
1. 연관 검색어 찾기(?): ```tab```
