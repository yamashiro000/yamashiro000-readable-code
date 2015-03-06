開発言語：C++

実行方法
	Visual Studio2010の開発環境に依存しているため
	Visual Studio2010をインストールして新規プロジェクトを作成し
	Githubリポジトリyamashiro000/yamashiro000-readable-codeから
	readable-code.cppをクローンしてプロジェクトにファイル追加し
	ビルドして実行する。

	recipe-data.txtをCドライブの直下に置く。
	ビルドしたプログラムを実行すると
	Cドライブの直下のrecipe-data.txtを読み込んで
	コンソールにレシピデータを表示する。

	recipe-data.txtに親子丼、杏仁豆腐を追加。

/////////////////////////////////////////////////////////////////

リーダブルな書き方
	URL：https://github.com/yamashiro000/myokoym-readable-code-workshop/commit/e4c89409f5090140261cb17442563ef99b3d9077

	コード：
 +	#define LINE_BUFFER 1024

	int
	main(int argc, char *argv[]) {
		FILE *file;
 -		char line[1024];
 +		char line[LINE_BUFFER];
		char *file_name = argv[1];

		file = fopen(file_name, "r");
		if (file == NULL) {
			fprintf(stderr, "ファイルをオープンできません: <%s>\n", file_name);
			return 1;
		}

 -		if (fgets(line, 1024, file) == NULL) {
 +		if (fgets(line, LINE_BUFFER, file) == NULL) {
			fprintf(stderr, "ファイルの読み込みに失敗しました: <%s>\n", file_name);
			return 1;
		}

		printf("%s\n", line);

		return 0;
	}

	理由：
	配列のサイズを#define定義することで配列のサイズ変更が楽になっている。

