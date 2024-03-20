# ```omz update```
1. ```ls -alrt```를 통해 ```.git``` 생성되었는지 확인
2. 생성되었다면? ```rm -rf .git```

## 그 외 사용되었던 명령어
$ ```git remote add origin <repo link>```<br>
$ ```git checkout -b main```<br>
$ ```git remote -v```<br>etc

# git commit 정리하는 방법
1. 원하는 파일들 `git commit` -> 근데 커밋을 합치고 싶다?
2. `git log`
3. 합치고 싶은 파일의 그 밑 깃커밋해시값(?)을 복사
4. `git rebase -i <해시값>`<br>
➕ [`git rebase -i` 가지고 놀기](https://80000coding.oopy.io/75c6610b-6869-43d2-aa5d-1b211a20c388)

# push 완료된 커밋 메시지 수정
1. 위 과정
2. `git rebase -i <해시값>`
3. `pick` → `reword`로 바꾼 후 메시지 수정
4. 또 수정
5. `git push --force-with-lease origin`
