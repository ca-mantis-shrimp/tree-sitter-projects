package tree_sitter_projects_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-projects"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_projects.Language())
	if language == nil {
		t.Errorf("Error loading Projects grammar")
	}
}
