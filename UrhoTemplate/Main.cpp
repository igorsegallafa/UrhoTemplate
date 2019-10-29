#include "PrecompiledHeader.h"
#include "Main.h"

Main::Main( Context* context ) : Application( context )
{
}

void Main::Setup()
{
    // Engine is not initialized yet. Set up all the parameters now.
    engineParameters_[EP_FULL_SCREEN] = false;
    engineParameters_[EP_WINDOW_HEIGHT] = 600;
    engineParameters_[EP_WINDOW_WIDTH] = 800;
    // Resource prefix path is a list of semicolon-separated paths which will be checked for containing resource directories. They are relative to application executable file.
#if _WIN32
    engineParameters_[EP_RESOURCE_PREFIX_PATHS] = "..";
#else
    engineParameters_[EP_RESOURCE_PREFIX_PATHS] = ".";
#endif
}

void Main::Start()
{
    // At this point engine is initialized, but first frame was not rendered yet. Further setup should be done here. To make sample a little bit user friendly show mouse cursor here.
    GetSubsystem<Input>()->SetMouseVisible( true );
}

void Main::Stop()
{
    // This step is executed when application is closing. No more frames will be rendered after this method is invoked.
}