import logging
#颜色
HEADER = '\033[95m'
OKBLUE = '\033[94m'
OKGREEN = '\033[92m'
WARNING = '\033[93m'
FAIL = '\033[91m'
ENDC = '\033[0m'

#添加日志等级名称以及颜色信息
logging.addLevelName(logging.INFO,'%s[%s]' % (HEADER,logging.getLevelName(logging.INFO)))
logging.addLevelName(logging.DEBUG,'%s[%s]' % (OKGREEN,logging.getLevelName(logging.DEBUG)))
logging.addLevelName(logging.WARNING,'%s[%s]' % (WARNING,logging.getLevelName(logging.WARNING)))
logging.addLevelName(logging.ERROR,'%s[%s]' % (FAIL,logging.getLevelName(logging.ERROR)))

#设置日志输出等级、时间、格式
logging.basicConfig(level=logging.DEBUG,format='%(levelname)-14s %(asctime)s   %(message)s')
QCIT_INFO = logging.info
QCIT_WARINIG = logging.warning
QCIT_ERROR = logging.error
QCIT_EXCEPTION = logging.exception
QCIT_DEBUG = logging.debug

