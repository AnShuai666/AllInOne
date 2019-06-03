import os
import sys
import multiprocessing

#获取当前文件名所在的绝对路径
scripts_path = os.path.abspath(os.path.dirname(__file__))
#分别获取脚本所在路径（即文件夹）的绝对路径名以及其路径名（文件夹名）
root_path, _ = os.path.split(scripts_path)

QCIT_build_path = os.path.join(root_path,'QCIT_BUILD')
QCIT_build_bin_path = os.path.join(QCIT_build_path,'install','bin')
tests_path = os.path.join(root_path,'tests')
tests_data_path = os.path.join(root_path, 'tests/test_data')

pyopencv_path = os.path.join(QCIT_build_path,'install/lib/python/dist_packages')
sys.path.append(pyopencv_path)

#定义opensfm路径
opensfm_path = os.path.join(QCIT_build_path,'src/opensfm')

#定义orb_slam2 路径
orb_slam2_path = os.path.join(QCIT_build_path,'src/orb_slam2')

#定义smvs 路径
makescene_path = os.path.join(QCIT_build_path, 'src', 'elibs', 'mve','apps','makescene','makescene')
smvs_path = os.path.join(QCIT_build_path,'src','elibs','smvs','app','smvsrecon')

#泊松重建二进制路径
possion_recon_path = os.path.join(QCIT_build_path,'src','PoissonRecon','Bin','Linux','PoissonRecon')
#dem2mesh路径
dem2mesh_path = os.path.join(QCIT_build_path,'src','dem2mesh','dem2mesh')
#dem2points 路径
dem2points_path = os.path.join(QCIT_build_path,'src','dem2points','dem2points')

#纹理贴图
mvstex_path = os.path.join(QCIT_build_path,"install/bin/texrecon")

#格式转换
txt2las_path = os.path.join(QCIT_build_path,'src/las-tools/bin')

#pdal路径
pdal_path = os.path.join(QCIT_build_path,'build/pdal/bin')

#定义QCIT_3D_VISUAL_WORLD 三维视界路径
Q3DVW_modules_path = os.path.join(root_path,"build/bin")
Q3DVW_modules_src_path = os.path.join(root_path,"modules")

#配置文件路径
settings_path = os.path.join(root_path,'settings.yaml')

#定义图像格式
supported_extensions = {'.jpg','.jpeg','.png'}

#定义CPU核数
num_cores = multiprocessing.cpu_count()











print(scripts_path)
print(root_path)
print(_)