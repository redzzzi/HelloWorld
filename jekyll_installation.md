[*LINK<sup>KR</sup>*](https://jekyllrb-ko.github.io/)

<p align="center"><b><i>In Ubuntu with ZSH</i></b></p>

## ```Installation```

```shell
sudo apt-get install ruby-full build-essential zlib1g-dev
```
<Br>

```shell
echo '# Install Ruby Gems to ~/gems' >> ~/.zshrc
```
```shell
echo 'export GEM_HOME="$HOME/gems"' >> ~/.zshrc
```
```shell
echo 'export PATH="$HOME/gems/bin:$PATH"' >> ~/.zshrc
```
```shell
source ~/.zshrc
```
<Br>

```shell
gem install jekyll bundler
```
