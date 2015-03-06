// readable-code.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "windows.h"


int _tmain(int argc, _TCHAR* argv[])
{
	FILE *fp;			// ファイルポインタの宣言
	char strRecipe[256];// レシピデータ用256バイトの配列
	
	/* ファイルのオープン */
	if ((fp = fopen("C:\\recipe-data.txt", "r")) == NULL) 
	{// エラーの場合は通常、異常終了する
		printf("file open error!!\n");
		exit(EXIT_FAILURE);
	}
	
	while (fgets(strRecipe, 256, fp) != NULL) 
	{// ここではfgets()により１行単位で読み出し
		printf("%s", strRecipe);
	}

	/* ファイルのクローズ */
	fclose(fp);
	
	/* コンソール表示残すためのSleep() */
	Sleep(1000);

	return 0;
}

