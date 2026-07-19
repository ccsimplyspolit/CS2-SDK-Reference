#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ENPCBehaviorOverride_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCChoreoSceneResource.hpp"

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
        // Size: 0xe8
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataOverlayType "1"
        // static metadata: MVDataAssociatedFile
        #pragma pack(push, 1)
        class CScenePayloadVData
        {
        public:
            source2sdk::client::ENPCBehaviorOverride_t m_eNPCBehavior; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // m_sSceneFile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCChoreoSceneResource>> m_sSceneFile;
            char m_sSceneFile[0xe0]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CScenePayloadVData, m_eNPCBehavior) == 0x0);
        static_assert(offsetof(source2sdk::client::CScenePayloadVData, m_sSceneFile) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CScenePayloadVData) == 0xe8);
    };
};
