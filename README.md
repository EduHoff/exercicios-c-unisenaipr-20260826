# exercicios-c-unisenaipr-20260826

Documentação rápida de compilação e execução do projeto.

---

## Makefile

> **Observação:**
> No Windows (utilizando MinGW), substitua (`make`) por (`mingw32-make`).

Compilar o projeto:
```
make
```

Compilar e executar:
```
make run
```

Limpar build:
```
make clean
```

---

## Docker

Primeira execução / Rebuild:
```
docker compose up --build
```

Iniciar:
```
docker compose run --rm exercicios-c-unisenaipr-20260826
```

Encerrar:
```
docker compose down
```
