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
        // Size: 0x8c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_TrooperNeutral_GraphController : public source2sdk::server::CAI_CitadelNPC_GraphController
        {
        public:
            // m_bShielded has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bShielded;
            char m_bShielded[0x28]; // 0x7f0            
            // m_bAlert has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bAlert;
            char m_bAlert[0x28]; // 0x818            
            // m_pszAttackLeanPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszAttackLeanPosition;
            char m_pszAttackLeanPosition[0x30]; // 0x840            
            // m_pszOrbDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszOrbDrop;
            char m_pszOrbDrop[0x30]; // 0x870            
            // m_bHeavyMelee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bHeavyMelee;
            char m_bHeavyMelee[0x28]; // 0x8a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperNeutral_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_TrooperNeutral_GraphController) == 0x8c8);
    };
};
