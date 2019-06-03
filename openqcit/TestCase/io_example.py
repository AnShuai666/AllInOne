from openqcit import io

if __name__ == '__main__':
    print('%s%s' % ('\033[95m',"qcit"))
    print(io.get_files_list(".."))
    print(io.absolute_path_file("logexample.py"))
    print(io.extract_file_from_path_file("./logexample.py"))