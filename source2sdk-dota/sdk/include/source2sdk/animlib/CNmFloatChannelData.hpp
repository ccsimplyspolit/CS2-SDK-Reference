#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmFloatChannelData_ChannelSettings_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x58
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmFloatChannelData
        {
        public:
            // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
            char m_skeleton[0x8]; // 0x0            
            CGlobalSymbol m_setID; // 0x8            
            // m_channelSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmFloatChannelData_ChannelSettings_t> m_channelSettings;
            char m_channelSettings[0x18]; // 0x10            
            // m_compressedData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_compressedData;
            char m_compressedData[0x18]; // 0x28            
            // m_compressedOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_compressedOffsets;
            char m_compressedOffsets[0x18]; // 0x40            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmFloatChannelData, m_skeleton) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmFloatChannelData, m_setID) == 0x8);
        static_assert(offsetof(source2sdk::animlib::CNmFloatChannelData, m_channelSettings) == 0x10);
        static_assert(offsetof(source2sdk::animlib::CNmFloatChannelData, m_compressedData) == 0x28);
        static_assert(offsetof(source2sdk::animlib::CNmFloatChannelData, m_compressedOffsets) == 0x40);
        
        static_assert(sizeof(source2sdk::animlib::CNmFloatChannelData) == 0x58);
    };
};
