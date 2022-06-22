# StudyC_Basic_2022
C 학습 리포지토리

<img src="https://raw.githubusercontent.com/ParkYongJun03/StudyC_Basic_2022/main/images/c.png" width ="200">

# Day1 
- visual studio Commuity 2022 설치
- C 기본개념
- C 기본문법
    - 상수와 데이터 출력
    - 변수와 데이터 입력
    - 연산자
    - 선택문
      - if
      - switch
# Day2
- C 기본문법
  - 반복문
    - while
    - for  
  - 함수
  - 배열, 포인터
  - 문자, 문자열
  - 메모리 동적할당
  - (변수, 데이터공유, 다차원 포인터, 응용포인터는 나중에)

# Day3
- C 기본문법
    - 메모리 동적할당 나머지
    - 파일 입출력
- MySQL DB 학습

# Day 4 ~ 5
- 실습 예제
    - 도서관 관리 프로그램(MySQL)
        - MSVC(C)
        - MySQL Connector C 6.1
        - MySQL Server
#### 실행화면
![displaydata](https://github.com/ParkYongJun03/StudyC_Basic_2022/blob/main/images/display_data.png?raw=true)
기본조회 화면
<br/>
![edit_data](https://github.com/ParkYongJun03/StudyC_Basic_2022/blob/main/images/edit_data.png?raw=true)
책 정보 수정 화면
<br/>
![first_menu](https://github.com/ParkYongJun03/StudyC_Basic_2022/blob/main/images/first_menu.png?raw=true)
기본조회 화면
<br/>
    
Study C 기초 2022 06 16

### Visual Studio Community 2022 설치
https://visualstudio.microsoft.com/ko/vs/

<img src="https://user-images.githubusercontent.com/83456300/173973519-2bb12638-aef3-4043-9626-2945da2c887d.png" width ="600">
- Python과 C++ 설치

### 계정 설정
  - Visual Studio 2022 실행 -> 상단 탭에 (파일 -> 계정설정)
  - 깃허브와 마소 로그인 -> (계정설정 클릭)
  
  <img src="https://user-images.githubusercontent.com/83456300/173973780-a0c38f1d-2ff2-4e4a-9f38-ed05bb611115.png" width ="400">
  - 계정 설정 -> 환경 -> 글꼴 및 설정 -> 나눔고딕코딩
  
  <img src="https://user-images.githubusercontent.com/83456300/173974087-9dde75e7-bec7-415d-83b5-c0eb762bfe6d.png" width ="600">
  - 계정 설정 -> 텍스트 편집기 -> 모든 언어 -> 줄 번호 check!, 탐색 모음 check!, 자동 중괄호 완성 check!
  - (-)라고 표시되어 있는 부분은 몇 몇 언어만이 표시되어 있다는 뜻.
  
<img src="https://user-images.githubusercontent.com/83456300/173974191-59343e0d-9e7c-4ab7-89ab-816b863967cc.png" width ="600">
 
### 솔루션 생성
  - VS 2022 실행 후 (파일 -> 새 프로젝트)

<img src="https://user-images.githubusercontent.com/83456300/173974455-706875e6-4d06-4a1d-9b94-a3ce295c908a.png" width ="600">

<img src="https://user-images.githubusercontent.com/83456300/173974557-116c98cb-12b9-4a5a-b4b3-1e659b2d3c19.png" width ="600">

- !솔루션은 하나 이상의 프로젝트를 담는 컨테이너!
### 소스파일 생성
- 우측 (솔루션 탐색기 -> (소스파일 폴더) -> main.cpp 파일 만들기)

![image](https://user-images.githubusercontent.com/83456300/173974711-2727742c-3a80-4b9f-9146-9814f75c0cd9.png)

### 설정 초기화
- 상단 탭(도구 -> 설정 가져오기 및 내보내기 -> 예 ->설정 저장-> Visual C++)

<img src="https://user-images.githubusercontent.com/83456300/173976023-ca560253-590b-4562-9a83-5cfb8c69e09a.png" width ="600">

### {ProjectName}.exe
- 파일 위치 : C:\Repository\StudyC_Basic_2022\day1\DayOneSolution\x64\Debug
![image](https://user-images.githubusercontent.com/83456300/173976119-336f0629-4a63-48a5-b812-55e55b9156f8.png)
  
### 시작 프로젝트 변경
- 일단 솔루 션 내에 다른 프로젝트 생성 (DataOutputApp)
- (솔루션) 오른쪽 클릭 -> 속성

<img src="https://user-images.githubusercontent.com/83456300/173977882-8ed2b951-8942-4fd5-aabf-25e17a74b762.png" width ="600">

### 한 프로젝트 안에 2개의 main함수가 존재 할 수 없음

<img src="https://user-images.githubusercontent.com/83456300/174199993-0a1c3f81-6e49-4df9-a03c-bb4f5fd4bd18.png" width ="600">

- main함수를 포함하는 또 다른 파일을 (프로젝트에서 제외)시키면 디버깅이 된다.
- 프로젝트에서 제외된 파일을 다시 보려면(포함할려면) (솔루션 탐색기 -> 상단 바(모든 파일 표시) 클릭 -> {해당 파일}우클릭 -> 프로젝트에 포함)
    
 ### 전처리기 정의 (scanf를 사용할 수 있음)
- 코드에 다음을 포함시킨다.
    
```c
#define _CRT_SECURE_NO_WARNINGS
```

- 또는 솔루션 탐색기에서 (프로젝트 오른쪽 클릭 -> 속성 -> 구성/속성 -> C/C++ -> 전처리기 -> 전처리기 정의-> 편집  {다음을 추가})

```c
_CRT_SECURE_NO_WARNINGS
```

<img src="https://user-images.githubusercontent.com/83456300/174200351-ca719eeb-491f-4029-92d1-a3dd85785d2c.png" width ="600">

 ### 명령어 단축기
  - Ctrl + K + D : 선택 영역 줄정렬
  - Ctrl 두 번 누르기 : intellisense 인라인 팁 보기
  - Ctrl + K + C : 선택 영역 주석 달기
  - Ctrl + K + U : 선택 영역 주석 지우기
  - Ctrl + F6 : 다음 탭
