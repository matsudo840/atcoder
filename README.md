# AtCoder

AtCoderで問題を解くためのリポジトリです。

## 📁 ディレクトリ構造

解いている問題集や学習記録など：

- `abs/`: [AtCoder Beginners Selection](https://atcoder.jp/contests/abs) (初心者向け10問)
- `apg4b/`: [C++入門講座 (APG4B)](https://atcoder.jp/contests/APG4B)
- `tessoku-book/`: [競技プログラミングの鉄則](https://atcoder.jp/contests/tessoku-book)
- `ac-library/`: [AtCoder Library (ACL)](https://github.com/atcoder/ac-library) ※Git管理外
- `templates/`: コードの雛形 (`main.cpp`, `main.py`)
- `practice/`: 雑多な練習用コード
- その他、コンテストごとにディレクトリを作成

## 🛠️ 私の開発環境 & セットアップ

もし他の環境でこのリポジトリを再現したり、参考にしたりする場合の手順です。

### 1. ツール構成
- **言語**: C++23 (GCC), Python 3.11+ (uv)
- **ライブラリ**: [ac-library (C++)](https://github.com/atcoder/ac-library), [ac-library-python](https://github.com/not522/ac-library-python)
- **CLI**: `atcoder-cli (acc)` + `online-judge-tools (oj)`

### 2. ライブラリのセットアップ (重要)
`ac-library` は `.gitignore` で除外されているため、手動でクローンまたはダウンロードが必要です。

```bash
# プロジェクトルートで実行
git clone https://github.com/atcoder/ac-library.git
```

### 3. セットアップ (Docker利用の場合)
Dockerを使うと、コンパイラやCLIツールがすべて揃った環境がすぐに立ち上がります。

```bash
# ビルド & 起動
docker-compose build
docker-compose run atcoder bash
```

### 4. セットアップ (ローカルの場合)
macOSなどで直接動かす場合：
1. `brew install gcc node uv`
2. `npm install -g atcoder-cli`
3. `uv pip install online-judge-tools`
4. `atcoder-cli-nodejs/config.json` を参考に `acc` の設定を確認


---

## 📖 使い方 (ワークフロー)

新しい問題に取り組む際の基本的な流れ：

1. **問題の取得**
   ```bash
   # 例: abc300 を作成
   acc new abc300
   cd abc300/a
   ```

2. **回答を書く**
   `main.cpp` または `main.py` を編集します。テンプレートは `templates/` にあります。

3. **テスト & 提出**
   ```bash
   acc test    # サンプルテスト実行
   acc submit  # 提出 AtCoder側の制限でsubmitが失敗することがあるので、その場合はGUIから提出する
   ```

## 💡 備忘録
- C++のテンプレートでは `ac-library` を相対パス (`../../ac-library`) でインクルードするように設定しています。
- Python環境は `uv` で管理しており、`ac-library-python` をインストール済みです。
