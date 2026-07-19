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
        // Size: 0x840
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_MidBoss_GraphController : public source2sdk::server::CAI_CitadelNPC_GraphController
        {
        public:
            // m_pszActivity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszActivity;
            char m_pszActivity[0x30]; // 0x7f0            
            CAnimGraphTagRef m_sAbilityDeployActive; // 0x820            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_MidBoss_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_MidBoss_GraphController) == 0x840);
    };
};
