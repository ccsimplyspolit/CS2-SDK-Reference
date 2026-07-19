#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Ringmaster_TameTheBeasts : public source2sdk::server::CDOTABaseAbility
        {
        public:
            VectorWS m_vCrackLocation; // 0x580            
            uint8_t _pad058c[0x4]; // 0x58c
            source2sdk::server::CDOTA_BaseNPC* m_pTarget; // 0x590            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x598            
            source2sdk::client::ParticleIndex_t m_nAvailableAOEFXIndex; // 0x59c            
            source2sdk::client::ParticleIndex_t m_nFinalAOEFXIndex; // 0x5a0            
            source2sdk::client::ParticleIndex_t m_nWhipAOEFXIndex; // 0x5a4            
            bool m_bWhiped; // 0x5a8            
            uint8_t _pad05a9[0x3]; // 0x5a9
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x5ac            
            VectorWS m_vStartLocation; // 0x5b0            
            uint8_t _pad05bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Ringmaster_TameTheBeasts because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Ringmaster_TameTheBeasts) == 0x5c0);
    };
};
