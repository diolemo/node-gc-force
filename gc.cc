#include <node.h>
#include <v8.h>

using namespace v8;

Handle<Value> force(const Arguments& args) {
    // run gc loop until all done
    while (!V8::IdleNotification());
    return Undefined();
}

void init(Handle<Object> target) {
    // link the js function to the c++ function
    NODE_SET_METHOD(target, "force", force);
}

// expose the addon
NODE_MODULE(gc, init)
