#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTextureBasedAnimatable : public source2sdk::server::CBaseModelEntity
        {
        public:
            bool m_bLoop; // 0x778            
            uint8_t _pad0779[0x3]; // 0x779
            float m_flFPS; // 0x77c            
            // m_hPositionKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hPositionKeys;
            char m_hPositionKeys[0x8]; // 0x780            
            // m_hRotationKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hRotationKeys;
            char m_hRotationKeys[0x8]; // 0x788            
            Vector m_vAnimationBoundsMin; // 0x790            
            Vector m_vAnimationBoundsMax; // 0x79c            
            // metadata: MNotSaved
            float m_flStartTime; // 0x7a8            
            float m_flStartFrame; // 0x7ac            
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTextureBasedAnimatable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTextureBasedAnimatable) == 0x7b0);
    };
};
