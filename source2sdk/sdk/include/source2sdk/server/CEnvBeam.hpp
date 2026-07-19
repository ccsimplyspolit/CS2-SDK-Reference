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
        // Size: 0x8a8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvBeam : public source2sdk::server::CBeam
        {
        public:
            std::int32_t m_active; // 0x810            
            uint8_t _pad0814[0x4]; // 0x814
            // m_spriteTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_spriteTexture;
            char m_spriteTexture[0x8]; // 0x818            
            CUtlSymbolLarge m_iszStartEntity; // 0x820            
            CUtlSymbolLarge m_iszEndEntity; // 0x828            
            float m_life; // 0x830            
            float m_boltWidth; // 0x834            
            float m_noiseAmplitude; // 0x838            
            std::int32_t m_speed; // 0x83c            
            float m_restrike; // 0x840            
            uint8_t _pad0844[0x4]; // 0x844
            CUtlSymbolLarge m_iszSpriteName; // 0x848            
            std::int32_t m_frameStart; // 0x850            
            VectorWS m_vEndPointWorld; // 0x854            
            // metadata: MNotSaved
            Vector m_vEndPointRelative; // 0x860            
            float m_radius; // 0x86c            
            source2sdk::server::Touch_t m_TouchType; // 0x870            
            uint8_t _pad0874[0x4]; // 0x874
            CUtlSymbolLarge m_iFilterName; // 0x878            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFilter;
            char m_hFilter[0x4]; // 0x880            
            uint8_t _pad0884[0x4]; // 0x884
            CUtlSymbolLarge m_iszDecal; // 0x888            
            source2sdk::entity2::CEntityIOOutput m_OnTouchedByEntity; // 0x890            
            
            // Datamap fields:
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputToggle; // 0x0
            // void InputStrikeOnce; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvBeam) == 0x8a8);
    };
};
