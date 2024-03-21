1. 리눅스에서는 숫자로 시작하는 유저를 추가할 수 없음 -> 하지만? 할 수 있음.
    - [참고 링크와 대체 해결법](https://unix.stackexchange.com/questions/287077/why-cant-linux-usernames-begin-with-numbers)
    - [소유권을 바꾸는 chown](https://zamezzz.tistory.com/85)
    - 결론 :
      디렉토리를 만드는 걸로 ```useradd```의 경우를 대체할 수 있으나,
      user로 취급하지는 않아 ```su - <username>```으로 로그인 불가능.
    - [임의의 user 지정 후 이름을 숫자로 바꾸기](https://yesyo.com/mintbbs/bbs/board.php?bo_table=linux&wr_id=184&page=9)
    - [user에 해당하는 디렉토리가 안 보일 때](https://daram2-everyday.tistory.com/50)
    - [user가 sudo 영역 밖일 때](https://starseeker711.tistory.com/176)
```plaintext
성 공 ~ !!
```
