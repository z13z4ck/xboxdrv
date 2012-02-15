// Do not edit by hand, this file was automatically generated by ./gen_symbols.rb

#include "symbols/environment.hpp"
#include "symbols/namespace.hpp"
#include "symbols/symbol.hpp"

void init_environment_abs(EnvironmentPtr env)
{
  {
    NamespacePtr ns = env->add_namespace("playstation");
    env->add_namespace_alias("ps", ns);
    env->add_namespace_alias("psx", ns);
    env->add_namespace_alias("ps2", ns);
    env->add_namespace_alias("ps3", ns);
    env->add_namespace_alias("playstation2", ns);
    env->add_namespace_alias("playstation3", ns);
    {
      SymbolPtr sym = ns->add_symbol("x1");
    }
    {
      SymbolPtr sym = ns->add_symbol("y1");
    }
    {
      SymbolPtr sym = ns->add_symbol("x2");
    }
    {
      SymbolPtr sym = ns->add_symbol("y2");
    }
    {
      SymbolPtr sym = ns->add_symbol("cross");
    }
    {
      SymbolPtr sym = ns->add_symbol("triangle");
    }
    {
      SymbolPtr sym = ns->add_symbol("square");
    }
    {
      SymbolPtr sym = ns->add_symbol("circle");
    }
    {
      SymbolPtr sym = ns->add_symbol("l1");
    }
    {
      SymbolPtr sym = ns->add_symbol("r1");
    }
    {
      SymbolPtr sym = ns->add_symbol("l2");
    }
    {
      SymbolPtr sym = ns->add_symbol("r2");
    }
    {
      SymbolPtr sym = ns->add_symbol("acc_x");
    }
    {
      SymbolPtr sym = ns->add_symbol("acc_y");
    }
    {
      SymbolPtr sym = ns->add_symbol("acc_z");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("evdev");
    env->add_namespace_alias("ev", ns);
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_TOUCH_MINOR");
      ns->add_alias("KEY_#49", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_TILT_Y");
      ns->add_alias("KEY_#27", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_HAT0X");
      ns->add_alias("KEY_#16", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_RZ");
      ns->add_alias("KEY_#5", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_TOOL_TYPE");
      ns->add_alias("KEY_#55", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_HAT3X");
      ns->add_alias("KEY_#22", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_X");
      ns->add_alias("KEY_#0", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_WIDTH_MAJOR");
      ns->add_alias("KEY_#50", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_TOOL_WIDTH");
      ns->add_alias("KEY_#28", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_HAT0Y");
      ns->add_alias("KEY_#17", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_THROTTLE");
      ns->add_alias("KEY_#6", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_BLOB_ID");
      ns->add_alias("KEY_#56", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_HAT3Y");
      ns->add_alias("KEY_#23", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_Y");
      ns->add_alias("KEY_#1", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_WIDTH_MINOR");
      ns->add_alias("KEY_#51", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MISC");
      ns->add_alias("KEY_#40", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_HAT1X");
      ns->add_alias("KEY_#18", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_RUDDER");
      ns->add_alias("KEY_#7", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_TRACKING_ID");
      ns->add_alias("KEY_#57", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_PRESSURE");
      ns->add_alias("KEY_#24", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_Z");
      ns->add_alias("KEY_#2", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_ORIENTATION");
      ns->add_alias("KEY_#52", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_HAT1Y");
      ns->add_alias("KEY_#19", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_WHEEL");
      ns->add_alias("KEY_#8", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_PRESSURE");
      ns->add_alias("KEY_#58", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_SLOT");
      ns->add_alias("KEY_#47", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_DISTANCE");
      ns->add_alias("KEY_#25", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_RX");
      ns->add_alias("KEY_#3", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_POSITION_X");
      ns->add_alias("KEY_#53", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_HAT2X");
      ns->add_alias("KEY_#20", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_GAS");
      ns->add_alias("KEY_#9", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_DISTANCE");
      ns->add_alias("KEY_#59", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_TOUCH_MAJOR");
      ns->add_alias("KEY_#48", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_TILT_X");
      ns->add_alias("KEY_#26", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_RY");
      ns->add_alias("KEY_#4", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_MT_POSITION_Y");
      ns->add_alias("KEY_#54", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_VOLUME");
      ns->add_alias("KEY_#32", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_HAT2Y");
      ns->add_alias("KEY_#21", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("ABS_BRAKE");
      ns->add_alias("KEY_#10", sym);
    }
  }
  {
    NamespacePtr ns = env->add_namespace("xbox");
    env->add_namespace_alias("xbox360", ns);
    env->add_namespace_alias("xb", ns);
    {
      SymbolPtr sym = ns->add_symbol("x1");
    }
    {
      SymbolPtr sym = ns->add_symbol("y1");
    }
    {
      SymbolPtr sym = ns->add_symbol("x2");
    }
    {
      SymbolPtr sym = ns->add_symbol("y2");
    }
    {
      SymbolPtr sym = ns->add_symbol("lt");
    }
    {
      SymbolPtr sym = ns->add_symbol("rt");
    }
    {
      SymbolPtr sym = ns->add_symbol("a");
    }
    {
      SymbolPtr sym = ns->add_symbol("y");
    }
    {
      SymbolPtr sym = ns->add_symbol("x");
    }
    {
      SymbolPtr sym = ns->add_symbol("b");
    }
    {
      SymbolPtr sym = ns->add_symbol("white");
    }
    {
      SymbolPtr sym = ns->add_symbol("black");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("nunchuk");
    {
      SymbolPtr sym = ns->add_symbol("x1");
    }
    {
      SymbolPtr sym = ns->add_symbol("y1");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("guitar");
  }
  {
    NamespacePtr ns = env->add_namespace("wiimote");
    env->add_namespace_alias("wii", ns);
    {
      SymbolPtr sym = ns->add_symbol("acc_x");
    }
    {
      SymbolPtr sym = ns->add_symbol("acc_y");
    }
    {
      SymbolPtr sym = ns->add_symbol("acc_z");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("joystick");
    env->add_namespace_alias("js", ns);
    env->add_namespace_alias("joy", ns);
    {
      SymbolPtr sym = ns->add_symbol("x1");
      ns->add_alias("x", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("y1");
      ns->add_alias("y", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("z1");
      ns->add_alias("z", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("x2");
    }
    {
      SymbolPtr sym = ns->add_symbol("y2");
    }
    {
      SymbolPtr sym = ns->add_symbol("z2");
    }
    {
      SymbolPtr sym = ns->add_symbol("rudder");
    }
    {
      SymbolPtr sym = ns->add_symbol("throttle");
    }
    {
      SymbolPtr sym = ns->add_symbol("gas");
    }
    {
      SymbolPtr sym = ns->add_symbol("break");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("hama-crux");
    env->add_namespace_alias("crux", ns);
    env->add_namespace_alias("zfang", ns);
  }
  {
    NamespacePtr ns = env->add_namespace("classic");
    env->add_namespace_alias("nintendo", ns);
    env->add_namespace_alias("snes", ns);
    {
      SymbolPtr sym = ns->add_symbol("x1");
    }
    {
      SymbolPtr sym = ns->add_symbol("y1");
    }
    {
      SymbolPtr sym = ns->add_symbol("x2");
    }
    {
      SymbolPtr sym = ns->add_symbol("y2");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("gamepad");
    env->add_namespace_alias("gp", ns);
    {
      SymbolPtr sym = ns->add_symbol("x1");
    }
    {
      SymbolPtr sym = ns->add_symbol("y1");
    }
    {
      SymbolPtr sym = ns->add_symbol("x2");
    }
    {
      SymbolPtr sym = ns->add_symbol("y2");
    }
    {
      SymbolPtr sym = ns->add_symbol("lt");
    }
    {
      SymbolPtr sym = ns->add_symbol("rt");
    }
    {
      SymbolPtr sym = ns->add_symbol("a");
    }
    {
      SymbolPtr sym = ns->add_symbol("y");
    }
    {
      SymbolPtr sym = ns->add_symbol("x");
    }
    {
      SymbolPtr sym = ns->add_symbol("b");
    }
    {
      SymbolPtr sym = ns->add_symbol("lb");
      ns->add_alias("white", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("rb");
      ns->add_alias("black", sym);
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("playstation");
    {
      SymbolPtr sym = ns->lookup("x1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x1"));
    }
    {
      SymbolPtr sym = ns->lookup("y1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y1"));
    }
    {
      SymbolPtr sym = ns->lookup("x2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x2"));
    }
    {
      SymbolPtr sym = ns->lookup("y2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y2"));
    }
    {
      SymbolPtr sym = ns->lookup("cross");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "a"));
    }
    {
      SymbolPtr sym = ns->lookup("triangle");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y"));
    }
    {
      SymbolPtr sym = ns->lookup("square");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x"));
    }
    {
      SymbolPtr sym = ns->lookup("circle");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "b"));
    }
    {
      SymbolPtr sym = ns->lookup("l1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "l1"));
    }
    {
      SymbolPtr sym = ns->lookup("r1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "r1"));
    }
    {
      SymbolPtr sym = ns->lookup("l2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "l2"));
    }
    {
      SymbolPtr sym = ns->lookup("r2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "r2"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("evdev");
  }
  {
    NamespacePtr ns = env->lookup_namespace("xbox");
    {
      SymbolPtr sym = ns->lookup("x1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x1"));
    }
    {
      SymbolPtr sym = ns->lookup("y1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y1"));
    }
    {
      SymbolPtr sym = ns->lookup("x2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x2"));
    }
    {
      SymbolPtr sym = ns->lookup("y2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y2"));
    }
    {
      SymbolPtr sym = ns->lookup("lt");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "lt"));
    }
    {
      SymbolPtr sym = ns->lookup("rt");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "rt"));
    }
    {
      SymbolPtr sym = ns->lookup("a");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "a"));
    }
    {
      SymbolPtr sym = ns->lookup("y");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y"));
    }
    {
      SymbolPtr sym = ns->lookup("x");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x"));
    }
    {
      SymbolPtr sym = ns->lookup("b");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "b"));
    }
    {
      SymbolPtr sym = ns->lookup("white");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "lb"));
    }
    {
      SymbolPtr sym = ns->lookup("black");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "rb"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("nunchuk");
    {
      SymbolPtr sym = ns->lookup("x1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x1"));
    }
    {
      SymbolPtr sym = ns->lookup("y1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y1"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("guitar");
  }
  {
    NamespacePtr ns = env->lookup_namespace("wiimote");
  }
  {
    NamespacePtr ns = env->lookup_namespace("joystick");
  }
  {
    NamespacePtr ns = env->lookup_namespace("hama-crux");
  }
  {
    NamespacePtr ns = env->lookup_namespace("classic");
    {
      SymbolPtr sym = ns->lookup("x1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x1"));
    }
    {
      SymbolPtr sym = ns->lookup("y1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y1"));
    }
    {
      SymbolPtr sym = ns->lookup("x2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x2"));
    }
    {
      SymbolPtr sym = ns->lookup("y2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y2"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("gamepad");
  }
}

/* EOF */
