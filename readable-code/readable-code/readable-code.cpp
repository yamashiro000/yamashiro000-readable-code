// readable-code.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include "windows.h"


int _tmain(int argc, _TCHAR* argv[])
{
	FILE *fp;			// �t�@�C���|�C���^�̐錾
	char strRecipe[256];// ���V�s�f�[�^�p256�o�C�g�̔z��
	
	/* �t�@�C���̃I�[�v�� */
	if ((fp = fopen("C:\\recipe-data.txt", "r")) == NULL) 
	{// �G���[�̏ꍇ�͒ʏ�A�ُ�I������
		printf("file open error!!\n");
		exit(EXIT_FAILURE);
	}
	
	while (fgets(strRecipe, 256, fp) != NULL) 
	{// �����ł�fgets()�ɂ��P�s�P�ʂœǂݏo��
		printf("%s", strRecipe);
	}

	/* �t�@�C���̃N���[�Y */
	fclose(fp);
	
	/* �R���\�[���\���c�����߂�Sleep() */
	Sleep(1000);

	return 0;
}

