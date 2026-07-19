#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBeam.hpp"
#include "source2sdk/server/Touch_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x8b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvBeam : public source2sdk::server::CBeam
        {
        public:
            std::int32_t m_active; // 0x818            
            uint8_t _pad081c[0x4]; // 0x81c
            // m_spriteTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_spriteTexture;
            char m_spriteTexture[0x8]; // 0x820            
            CUtlSymbolLarge m_iszStartEntity; // 0x828            
            CUtlSymbolLarge m_iszEndEntity; // 0x830            
            float m_life; // 0x838            
            float m_boltWidth; // 0x83c            
            float m_noiseAmplitude; // 0x840            
            std::int32_t m_speed; // 0x844            
            float m_restrike; // 0x848            
            uint8_t _pad084c[0x4]; // 0x84c
            CUtlSymbolLarge m_iszSpriteName; // 0x850            
            std::int32_t m_frameStart; // 0x858            
            VectorWS m_vEndPointWorld; // 0x85c            
            // metadata: MNotSaved
            Vector m_vEndPointRelative; // 0x868            
            float m_radius; // 0x874            
            source2sdk::server::Touch_t m_TouchType; // 0x878            
            uint8_t _pad087c[0x4]; // 0x87c
            CUtlSymbolLarge m_iFilterName; // 0x880            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFilter;
            char m_hFilter[0x4]; // 0x888            
            uint8_t _pad088c[0x4]; // 0x88c
            CUtlSymbolLarge m_iszDecal; // 0x890            
            source2sdk::entity2::CEntityIOOutput m_OnTouchedByEntity; // 0x898            
            
            // Datamap fields:
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputToggle; // 0x0
            // void InputStrikeOnce; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvBeam) == 0x8b0);
    };
};
