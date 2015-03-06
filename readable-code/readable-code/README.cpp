開発言語：C++

Spec2:実行方法
	Visual Studio2010の開発環境に依存しているため
	Visual Studio2010をインストールして新規プロジェクトを作成し
	Githubリポジトリyamashiro000/yamashiro000-readable-codeから
	readable-code.cppをクローンしてプロジェクトにファイル追加し
	ビルドして実行する。

Spec3:レシピデータの分離&レシピデータ読込
	レシピデータをrecipe-data.txtとして分離し
	recipe-data.txtをCドライブの直下に置く。
	ビルドしたプログラムを実行すると
	Cドライブの直下のrecipe-data.txtを読み込んで
	コンソールにレシピデータを表示する。