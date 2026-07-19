#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC_GraphController.hpp"

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
        // Size: 0x8b8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Trooper_GraphController : public source2sdk::server::CAI_CitadelNPC_GraphController
        {
        public:
            // m_flVariant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flVariant;
            char m_flVariant[0x18]; // 0x7f0            
            // m_bExplosionReact has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bExplosionReact;
            char m_bExplosionReact[0x18]; // 0x808            
            // m_bMedicHeal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bMedicHeal;
            char m_bMedicHeal[0x18]; // 0x820            
            // m_flExplosionReactRandomTimeScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flExplosionReactRandomTimeScale;
            char m_flExplosionReactRandomTimeScale[0x18]; // 0x838            
            // m_eTurn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_eTurn;
            char m_eTurn[0x18]; // 0x850            
            // m_eBaseAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_eBaseAction;
            char m_eBaseAction[0x18]; // 0x868            
            // m_bZiplining has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bZiplining;
            char m_bZiplining[0x18]; // 0x880            
            // m_bFalling has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bFalling;
            char m_bFalling[0x18]; // 0x898            
            bool m_bShouldReset; // 0x8b0            
            uint8_t _pad08b1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Trooper_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Trooper_GraphController) == 0x8b8);
    };
};
