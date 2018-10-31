filetype plugin indent on
set smartindent
set number
set tabstop=4
set shiftwidth=4
set expandtab
au BufNewFile *.xml 0r ~/.vim/xml.skel | let IndentStyle = "xml"
au BufNewFile *.cpp 0r ~/.vim/cpp.skel | let IndentStyle = "cpp"
