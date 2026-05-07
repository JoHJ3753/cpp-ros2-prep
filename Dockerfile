# Ubuntu 22.04는 ROS2 Humble 학습과 궁합이 좋은 기반 이미지입니다.
FROM ubuntu:22.04

# 패키지 설치 중 대화형 입력이 뜨지 않도록 설정합니다.
ENV DEBIAN_FRONTEND=noninteractive

# C++ 개발에 필요한 기본 도구를 설치합니다.
RUN apt-get update && apt-get install -y \
    build-essential \
    g++ \
    gcc \
    cmake \
    make \
    git \
    vim \
    nano \
	terminator \
    tree \
    && rm -rf /var/lib/apt/lists/*

# 컨테이너 안에서 작업할 기본 폴더를 지정합니다.
WORKDIR /workspace

# 컨테이너가 바로 종료되지 않도록 bash를 기본 실행합니다.
CMD ["/bin/bash"]