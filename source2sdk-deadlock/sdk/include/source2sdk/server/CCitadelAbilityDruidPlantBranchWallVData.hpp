#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x18f8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelAbilityDruidPlantBranchWallVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_BranchWallModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_BranchWallModel;
            char m_BranchWallModel[0xe0]; // 0x1818            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelAbilityDruidPlantBranchWallVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelAbilityDruidPlantBranchWallVData) == 0x18f8);
    };
};
