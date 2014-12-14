namespace Dgafka\BookStore\Business\Service\Service;

class CommandQueryBus
{

    public function execute(handler, command) {
        var methodName;

        let methodName = this->getMethodName(command);

        if(!method_exists(handler, methodName)){
            throw new Exception\ClassNotFoundException("Class with such method doesn't exists: " . methodName);
        }

        return handler->{methodName}(command);
    }


    private function getMethodName(command) -> string {
        var className;

        let className = (array)explode("\\", get_class(command));

        return "handle" . (string)ucfirst(end(className));
    }

}