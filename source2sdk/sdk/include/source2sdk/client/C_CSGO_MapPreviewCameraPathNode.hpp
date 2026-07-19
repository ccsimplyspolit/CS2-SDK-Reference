#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x650
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_CSGO_MapPreviewCameraPathNode : public source2sdk::client::C_BaseEntity
        {
        public:
            CUtlSymbolLarge m_szParentPathUniqueID; // 0x600            
            std::int32_t m_nPathIndex; // 0x608            
            Vector m_vInTangentLocal; // 0x60c            
            Vector m_vOutTangentLocal; // 0x618            
            float m_flFOV; // 0x624            
            float m_flCameraSpeed; // 0x628            
            float m_flEaseIn; // 0x62c            
            float m_flEaseOut; // 0x630            
            Vector m_vInTangentWorld; // 0x634            
            Vector m_vOutTangentWorld; // 0x640            
            uint8_t _pad064c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGO_MapPreviewCameraPathNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGO_MapPreviewCameraPathNode) == 0x650);
    };
};
