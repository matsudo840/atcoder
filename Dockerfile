# AtCoder 開発環境 for Docker
# g++ (GCC 14), Python 3.11, Node.js, atcoder-cli, online-judge-tools

FROM gcc:14

# 必要なパッケージのインストール
RUN apt-get update && apt-get install -y \
    python3 \
    python3-pip \
    python3-venv \
    nodejs \
    npm \
    curl \
    git \
    && rm -rf /var/lib/apt/lists/*

# uv (Python package manager) のインストール
RUN curl -LsSf https://astral.sh/uv/install.sh | sh
ENV PATH="/root/.local/bin:$PATH"

# atcoder-cli のインストール
RUN npm install -g atcoder-cli

# online-judge-tools のインストール
RUN pip3 install online-judge-tools --break-system-packages

# 作業ディレクトリの設定
WORKDIR /workspace

# エイリアスの設定 (g++-15 -> g++)
# ローカルのテンプレートが g++-15 を使っている場合でも動くようにする
RUN ln -s /usr/local/bin/g++ /usr/local/bin/g++-15

CMD ["/bin/bash"]
