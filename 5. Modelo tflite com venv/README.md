# Criando modelo TFLite com ambiente virtual

# Configurando ambiente

Primeiramente, instale o [python3](https://www.python.org/downloads/), [pip3](https://pip.pypa.io/en/stable/installation/) e o gerenciador de versões do python [pyenv](https://github.com/pyenv/pyenv#installation). Após instalar o `pyenv`, `python` e `pip` execute os seguintes comandos:

> Recomendo instalação lendo diretamente no _repo_ do pyenv pois pode ser necessário configurações de variáveis de ambiente.

Instale e selecione a versão escolhida através do `pyenv`:
```bash
pyenv install
```

Instale o ambiente virtual isolado:
```bash
pyenv virtualenv 3.9.0 env
cp -r ~/.pyenv/versions/3.9.0/envs/env env
```

Então ative este ambiente:
```bash
source env/bin/activate
```

E instale as dependências:
```bash
pip install -r requirements.txt
```

Para instalar o kernel para executar dentro deste ambiente virtual:
```bash
ipython kernel install --user --name=env
```

Caso queira desinstalar o kernel:
```bash
jupyter-kernelspec uninstall venv
```

