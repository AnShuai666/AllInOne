import os
import shutil,errno

#获取path_dir路径下的文件列表
def get_files_list(path_dir):
    return os.listdir(path_dir)

#获取文件path_file的绝对路径
def absolute_path_file(path_file):
    return  os.path.abspath(path_file)

#获取path_file中的文件名
def extract_file_from_path_file(path_file):
    path,file = os.path.split(path_file)
    return file

#将path1与path2结合
def join_paths(path1,path2):
    return os.path.join(path1,path2)

#检查path_file是否存在
def file_exists(path_file):
    return os.path.isfile(path_file)

#检查dirname是否存在
def dir_exists(dirname):
    return os.path.isdir(dirname)

#此处语法较多 用时细看
def copy(src, dst):
    try:
        shutil.copy(src, dst)
    except OSError as e:
        if e.errno == errno.ENOTDIR:
            shutil.copy(src,dst)
        else:
            raise

#此处语法较多 用时细看
def rename_file(src,dst):
    try:
        os.rename(src,dst)
        return True
    except OSError as e:
        if e.errno == errno.ENOENT:
            return False
        else:
            raise

#此处语法较多 用时细看
def find(filename,folder):
    for root, dirs, files in os.walk(folder):
        return '/'.join((root,filename)) if filename in files else None
