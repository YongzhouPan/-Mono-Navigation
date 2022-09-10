// Generated by gencpp from file tello_driver/MoveDownRequest.msg
// DO NOT EDIT!


#ifndef TELLO_DRIVER_MESSAGE_MOVEDOWNREQUEST_H
#define TELLO_DRIVER_MESSAGE_MOVEDOWNREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tello_driver
{
template <class ContainerAllocator>
struct MoveDownRequest_
{
  typedef MoveDownRequest_<ContainerAllocator> Type;

  MoveDownRequest_()
    : cm(0)  {
    }
  MoveDownRequest_(const ContainerAllocator& _alloc)
    : cm(0)  {
  (void)_alloc;
    }



   typedef uint8_t _cm_type;
  _cm_type cm;





  typedef boost::shared_ptr< ::tello_driver::MoveDownRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tello_driver::MoveDownRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveDownRequest_

typedef ::tello_driver::MoveDownRequest_<std::allocator<void> > MoveDownRequest;

typedef boost::shared_ptr< ::tello_driver::MoveDownRequest > MoveDownRequestPtr;
typedef boost::shared_ptr< ::tello_driver::MoveDownRequest const> MoveDownRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tello_driver::MoveDownRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tello_driver::MoveDownRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tello_driver::MoveDownRequest_<ContainerAllocator1> & lhs, const ::tello_driver::MoveDownRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cm == rhs.cm;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tello_driver::MoveDownRequest_<ContainerAllocator1> & lhs, const ::tello_driver::MoveDownRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tello_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tello_driver::MoveDownRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tello_driver::MoveDownRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tello_driver::MoveDownRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tello_driver::MoveDownRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tello_driver::MoveDownRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tello_driver::MoveDownRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tello_driver::MoveDownRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c312fc33b3f97db71360144ffc9717f8";
  }

  static const char* value(const ::tello_driver::MoveDownRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc312fc33b3f97db7ULL;
  static const uint64_t static_value2 = 0x1360144ffc9717f8ULL;
};

template<class ContainerAllocator>
struct DataType< ::tello_driver::MoveDownRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tello_driver/MoveDownRequest";
  }

  static const char* value(const ::tello_driver::MoveDownRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tello_driver::MoveDownRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8   cm\n"
;
  }

  static const char* value(const ::tello_driver::MoveDownRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tello_driver::MoveDownRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveDownRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tello_driver::MoveDownRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tello_driver::MoveDownRequest_<ContainerAllocator>& v)
  {
    s << indent << "cm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cm);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TELLO_DRIVER_MESSAGE_MOVEDOWNREQUEST_H
