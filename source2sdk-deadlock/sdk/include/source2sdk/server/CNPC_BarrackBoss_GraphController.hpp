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
        // Size: 0x838
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_BarrackBoss_GraphController : public source2sdk::server::CAI_CitadelNPC_GraphController
        {
        public:
            // b_dying has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> b_dying;
            char b_dying[0x18]; // 0x7f0            
            // b_dead has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> b_dead;
            char b_dead[0x18]; // 0x808            
            // b_shield_active has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> b_shield_active;
            char b_shield_active[0x18]; // 0x820            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_BarrackBoss_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_BarrackBoss_GraphController) == 0x838);
    };
};
