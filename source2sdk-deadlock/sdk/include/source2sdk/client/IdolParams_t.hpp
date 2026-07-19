#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Standard-layout class: true
        // Size: 0x578
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct IdolParams_t
        {
        public:
            // m_IdolModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_IdolModel;
            char m_IdolModel[0xe0]; // 0x0            
            // m_ParachuteModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_ParachuteModel;
            char m_ParachuteModel[0xe0]; // 0xe0            
            // m_CrateModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_CrateModel;
            char m_CrateModel[0xe0]; // 0x1c0            
            CUtlString m_strLoopingSequenceName; // 0x2a0            
            // m_IdolReturnLocationParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdolReturnLocationParticle;
            char m_IdolReturnLocationParticle[0xe0]; // 0x2a8            
            float m_flIdolReturnLocationParticleScale; // 0x388            
            uint8_t _pad038c[0x4]; // 0x38c
            // m_IdolSpawnLocationParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdolSpawnLocationParticle;
            char m_IdolSpawnLocationParticle[0xe0]; // 0x390            
            // m_IdolDroppingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdolDroppingParticle;
            char m_IdolDroppingParticle[0xe0]; // 0x470            
            CSoundEventName m_IdolSpawnSound; // 0x550            
            CSoundEventName m_IdolSpawnCompleteSound; // 0x560            
            float m_flIdolDropHeight; // 0x570            
            float m_flIdolDropDuration; // 0x574            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::IdolParams_t, m_IdolModel) == 0x0);
        static_assert(offsetof(source2sdk::client::IdolParams_t, m_ParachuteModel) == 0xe0);
        static_assert(offsetof(source2sdk::client::IdolParams_t, m_CrateModel) == 0x1c0);
        static_assert(offsetof(source2sdk::client::IdolParams_t, m_strLoopingSequenceName) == 0x2a0);
        static_assert(offsetof(source2sdk::client::IdolParams_t, m_IdolReturnLocationParticle) == 0x2a8);
        static_assert(offsetof(source2sdk::client::IdolParams_t, m_flIdolReturnLocationParticleScale) == 0x388);
        static_assert(offsetof(source2sdk::client::IdolParams_t, m_IdolSpawnLocationParticle) == 0x390);
        static_assert(offsetof(source2sdk::client::IdolParams_t, m_IdolDroppingParticle) == 0x470);
        static_assert(offsetof(source2sdk::client::IdolParams_t, m_IdolSpawnSound) == 0x550);
        static_assert(offsetof(source2sdk::client::IdolParams_t, m_IdolSpawnCompleteSound) == 0x560);
        static_assert(offsetof(source2sdk::client::IdolParams_t, m_flIdolDropHeight) == 0x570);
        static_assert(offsetof(source2sdk::client::IdolParams_t, m_flIdolDropDuration) == 0x574);
        
        static_assert(sizeof(source2sdk::client::IdolParams_t) == 0x578);
    };
};
