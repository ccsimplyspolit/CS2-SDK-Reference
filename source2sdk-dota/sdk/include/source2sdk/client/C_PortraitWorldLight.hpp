#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_EnvDeferredLight.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_PortraitWorldUnit;
    };
};

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
        // Size: 0xd70
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_PortraitWorldLight : public source2sdk::client::C_EnvDeferredLight
        {
        public:
            float m_flLatitude; // 0xd30            
            float m_flLongitude; // 0xd34            
            float m_flAdditionalRadius; // 0xd38            
            float m_flBoundsRadiusMultiplier; // 0xd3c            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_PortraitWorldUnit> m_hTarget;
            char m_hTarget[0x4]; // 0xd40            
            bool m_bShowGizmos; // 0xd44            
            uint8_t _pad0d45[0x3]; // 0xd45
            CUtlStringToken m_hitboxSetName; // 0xd48            
            VectorWS m_vPreviousCenter; // 0xd4c            
            Vector m_vCenterVelocity; // 0xd58            
            float m_flPreviousBoundingSphereRadius; // 0xd64            
            float m_flBoundingSphereRadiusChangeSpeed; // 0xd68            
            bool m_bPreviousValuesInitialized; // 0xd6c            
            uint8_t _pad0d6d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PortraitWorldLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldLight) == 0xd70);
    };
};
