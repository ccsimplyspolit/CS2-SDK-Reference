#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x518
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvEntityMaker : public source2sdk::server::CPointEntity
        {
        public:
            // metadata: MNotSaved
            Vector m_vecEntityMins; // 0x498            
            // metadata: MNotSaved
            Vector m_vecEntityMaxs; // 0x4a4            
            // m_hCurrentInstance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentInstance;
            char m_hCurrentInstance[0x4]; // 0x4b0            
            // m_hCurrentBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentBlocker;
            char m_hCurrentBlocker[0x4]; // 0x4b4            
            VectorWS m_vecBlockerOrigin; // 0x4b8            
            QAngle m_angPostSpawnDirection; // 0x4c4            
            float m_flPostSpawnDirectionVariance; // 0x4d0            
            float m_flPostSpawnSpeed; // 0x4d4            
            bool m_bPostSpawnUseAngles; // 0x4d8            
            uint8_t _pad04d9[0x7]; // 0x4d9
            CUtlSymbolLarge m_iszTemplate; // 0x4e0            
            source2sdk::entity2::CEntityIOOutput m_pOutputOnSpawned; // 0x4e8            
            source2sdk::entity2::CEntityIOOutput m_pOutputOnFailedSpawn; // 0x500            
            
            // Datamap fields:
            // void InputForceSpawn; // 0x0
            // CUtlSymbolLarge InputForceSpawnAtEntityOrigin; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvEntityMaker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvEntityMaker) == 0x518);
    };
};
