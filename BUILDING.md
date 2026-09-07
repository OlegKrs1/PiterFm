# Сборка из исходника

Исходный файл находится в:

`src/piterfm.c`

PiterFM использует Win32 API и системные компоненты Windows.

Текущая версия рассчитана на x64.

Один из вариантов сборки — LLVM `clang-cl` + `lld-link` с библиотеками Windows SDK.

Примерная схема:

```bat
clang-cl /nologo /c /GS- /O1 /TC /utf-8 src\piterfm.c /Fopiterfm.obj

lld-link /nologo ^
  /subsystem:windows ^
  /entry:wWinMainCRTStartup ^
  /nodefaultlib ^
  /out:PiterFM.exe ^
  piterfm.obj ^
  kernel32.lib user32.lib gdi32.lib ole32.lib ^
  comctl32.lib oleaut32.lib wininet.lib
```

Конкретные пути к библиотекам зависят от установленной версии Windows SDK и LLVM.

Для публичного релиза после сборки:

1. встроить/проверить иконку;
2. протестировать EXE на чистой Windows;
3. подписать цифровой подписью;
4. проверить подпись;
5. рассчитать SHA-256.
