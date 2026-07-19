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
        class CNPC_Boss_Tier3_GraphController : public source2sdk::server::CAI_CitadelNPC_GraphController
        {
        public:
            // m_eBaseAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_eBaseAction;
            char m_eBaseAction[0x18]; // 0x7f0            
            // m_eArmSide has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_eArmSide;
            char m_eArmSide[0x18]; // 0x808            
            // m_eArmPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_eArmPosition;
            char m_eArmPosition[0x18]; // 0x820            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Boss_Tier3_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Boss_Tier3_GraphController) == 0x838);
    };
};
