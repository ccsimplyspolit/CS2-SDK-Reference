#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PhysicsProp.hpp"
#include "source2sdk/client/DOTACrateDropObjectDefID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace particleslib
    {
        struct CNewParticleEffect;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xcd0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CDarkCarnivalCrateDropEntity : public source2sdk::client::C_PhysicsProp
        {
        public:
            source2sdk::client::DOTACrateDropObjectDefID_t m_unDefID; // 0xc40            
            uint8_t _pad0c44[0xc]; // 0xc44
            float m_flAcceleration; // 0xc50            
            float m_flMaxSpeed; // 0xc54            
            uint8_t _pad0c58[0x14]; // 0xc58
            std::int8_t m_nTutorialObject; // 0xc6c            
            std::int8_t m_nDisableSpawnRotation; // 0xc6d            
            uint8_t _pad0c6e[0x22]; // 0xc6e
            float m_flPoints; // 0xc90            
            float m_flHazardExplosionRadius; // 0xc94            
            float m_flExplosionStrength; // 0xc98            
            float m_flUpkickExplosionStrength; // 0xc9c            
            float m_flTriggerDelay; // 0xca0            
            float m_flTriggeredGravityScale; // 0xca4            
            bool m_bHasBeenTriggered; // 0xca8            
            bool m_bHazardDefused; // 0xca9            
            bool m_bCurrentlyActivated; // 0xcaa            
            uint8_t _pad0cab[0x1]; // 0xcab
            source2sdk::entity2::GameTime_t m_flNextPossibleTriggerTime; // 0xcac            
            source2sdk::entity2::GameTime_t m_flCreationTime; // 0xcb0            
            uint8_t _pad0cb4[0x4]; // 0xcb4
            source2sdk::particleslib::CNewParticleEffect* pDropEffect; // 0xcb8            
            bool m_bMarkedForDestroy; // 0xcc0            
            bool m_bHazardRotationApplied; // 0xcc1            
            uint8_t _pad0cc2[0xe];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDarkCarnivalCrateDropEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDarkCarnivalCrateDropEntity) == 0xcd0);
    };
};
