#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_BaseNPC;
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
        // Size: 0x6e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Ringmaster_TameTheBeasts : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            VectorWS m_vCrackLocation; // 0x6a8            
            uint8_t _pad06b4[0x4]; // 0x6b4
            source2sdk::client::C_DOTA_BaseNPC* m_pTarget; // 0x6b8            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x6c0            
            source2sdk::client::ParticleIndex_t m_nAvailableAOEFXIndex; // 0x6c4            
            source2sdk::client::ParticleIndex_t m_nFinalAOEFXIndex; // 0x6c8            
            source2sdk::client::ParticleIndex_t m_nWhipAOEFXIndex; // 0x6cc            
            bool m_bWhiped; // 0x6d0            
            uint8_t _pad06d1[0x3]; // 0x6d1
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x6d4            
            VectorWS m_vStartLocation; // 0x6d8            
            uint8_t _pad06e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Ringmaster_TameTheBeasts because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Ringmaster_TameTheBeasts) == 0x6e8);
    };
};
