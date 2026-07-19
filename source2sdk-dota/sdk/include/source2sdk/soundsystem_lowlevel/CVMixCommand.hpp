#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/VMixGraphCommandID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixCommand
        {
        public:
            // metadata: MKV3TransferName "command"
            source2sdk::soundsystem_lowlevel::VMixGraphCommandID_t m_nCommand; // 0x0            
            // metadata: MKV3TransferName "paramName"
            std::uint32_t m_nParameterNameHash; // 0x4            
            // metadata: MKV3TransferName "outputSubmix"
            std::int32_t m_nOutputSubmix; // 0x8            
            // metadata: MKV3TransferName "inputSubmix0"
            std::int32_t m_nInputSubmix0; // 0xc            
            // metadata: MKV3TransferName "inputSubmix1"
            std::int32_t m_nInputSubmix1; // 0x10            
            // metadata: MKV3TransferName "processor"
            std::int32_t m_nProcessor; // 0x14            
            // metadata: MKV3TransferName "inputValue0"
            std::int32_t m_nInputValue0; // 0x18            
            // metadata: MKV3TransferName "inputValue1"
            std::int32_t m_nInputValue1; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixCommand, m_nCommand) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixCommand, m_nParameterNameHash) == 0x4);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixCommand, m_nOutputSubmix) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixCommand, m_nInputSubmix0) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixCommand, m_nInputSubmix1) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixCommand, m_nProcessor) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixCommand, m_nInputValue0) == 0x18);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixCommand, m_nInputValue1) == 0x1c);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixCommand) == 0x20);
    };
};
