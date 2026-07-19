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
        // Size: 0x868
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_MortarSentry_GraphController : public source2sdk::server::CAI_CitadelNPC_GraphController
        {
        public:
            // m_flPanel1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flPanel1;
            char m_flPanel1[0x28]; // 0x7f0            
            // m_bUnpackInstant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bUnpackInstant;
            char m_bUnpackInstant[0x28]; // 0x818            
            // m_flVelocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flVelocity;
            char m_flVelocity[0x28]; // 0x840            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_MortarSentry_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_MortarSentry_GraphController) == 0x868);
    };
};
